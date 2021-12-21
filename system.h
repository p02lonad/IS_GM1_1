#ifndef system_h
#define system_h

    #include <iostream>
    #include <cstdlib>

    class Usuario
    {
        private:
            string Nombreusuario_;
            string Contrasena;
        public:
            void getLista();
            void CambiarContrasena(string nombreUsuario);
    };
    
    class Reserva
    {
        private:
            string Fecha_;
            int Duracion;
        public:
        void ModificarReserva(string fecha)
        void CancelarReserva(string fecha)
        void Reservar(string fecha);
    };
    
    class Maquina
    {
        private:
            int Nucleos_
            bool Disponibilidad_
            int Idmaquina_
        public:
            bool comprobarDisponibilidad(string fecha, string nucleos)
            void modificarMaquinas(string fecha, string nucleos)
            void eliminarMaquinas(string fecha, string nucleos)
    };


#endif
