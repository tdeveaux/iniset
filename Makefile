iniset.exe: main.obj
	LINK /NOLOGO /OUT:iniset.exe main.obj

main.obj: main.c
	CL /c /nologo /W4 main.c

clean:
	DEL iniset.exe main.obj
