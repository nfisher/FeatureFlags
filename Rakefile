require 'rake/clean'


EXE='bin/linereader'
HDRS=FileList['src/**/*.h']
SRC=FileList['src/**/*.cpp']
OBJ=SRC.ext('o')
BIN_DIR='bin'

CLEAN.include(OBJ)
CLOBBER.include('test.exe')

rule '.o' => ['.cpp'] do |t|
	sh "g++ #{t.source} -c -Isrc -o #{t.name}"
end

file EXE do
	sh "g++ -o #{EXE} -Isrc #{OBJ}"
end

file BIN_DIR do
	Dir.mkdir(BIN_DIR)
end

desc "Default: Build the #{EXE} executable"
task :default => [:build]

desc "Build the executable"
task :build => [EXE]

file 'main.o' => ['main.cpp'] + HDRS
file EXE => OBJ + [BIN_DIR]
