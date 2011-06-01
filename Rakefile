require 'rake/clean'


EXE='linereader'
HDRS=FileList['src/**/*.h']
SRC=FileList['src/**/*.cpp']
OBJ=SRC.ext('o')

CLEAN.include(OBJ)
CLOBBER.include('test.exe')

rule '.o' => ['.cpp'] do |t|
	sh "g++ #{t.source} -c -Isrc -o #{t.name}"
end

file EXE do
	sh "g++ -o #{EXE} -Isrc #{OBJ}"
end

desc "Default: Build the #{EXE} executable"
task :default => [:build]

desc "Build the executable"
task :build => [EXE]

file 'main.o' => ['main.cpp'] + HDRS
file EXE => OBJ
