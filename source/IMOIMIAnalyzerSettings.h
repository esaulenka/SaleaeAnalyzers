#ifndef IMOIMI_ANALYZER_SETTINGS
#define IMOIMI_ANALYZER_SETTINGS

#include <AnalyzerSettings.h>
#include <AnalyzerTypes.h>

class IMOIMIAnalyzerSettings : public AnalyzerSettings
{
public:
	IMOIMIAnalyzerSettings();
	virtual ~IMOIMIAnalyzerSettings();

	virtual bool SetSettingsFromInterfaces();
	void UpdateInterfacesFromSettings();
	virtual void LoadSettings( const char* settings );
	virtual const char* SaveSettings();

	
	Channel mInputChannel;
	bool mVersion2;
	bool mRevBits;

protected:
	std::auto_ptr< AnalyzerSettingInterfaceChannel >	mInputChannelInterface;
	std::auto_ptr< AnalyzerSettingInterfaceNumberList >	mVersionInterface;
	std::auto_ptr< AnalyzerSettingInterfaceNumberList >	mBitsOrderInterface;
};

#endif //IMOIMI_ANALYZER_SETTINGS
