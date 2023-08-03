Per chiudere QEMU in terminal mode fare `CTRL+A X`

Per aggiungere programmi alla userland la procedura e':
- Scrivi in user/ un nomeprogramma.c
- Nel Makefile in riga 118 mettere nel UPROGS il nome del programma in formato `$U/_nomeprogramma\`

La sintassi usata in [](kernel/syscall.c#L107) si chiama "Designated initializers for aggregate types" (C99)
