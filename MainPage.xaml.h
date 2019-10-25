//
// MainPage.xaml.h
// Declaración de la clase MainPage.
//

#pragma once

#include "MainPage.g.h"

namespace GoodNight
{
	/// <summary>
	/// Página vacía que se puede usar de forma independiente o a la que se puede navegar dentro de un objeto Frame.
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();

	private:
		void BotonAplicar_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
