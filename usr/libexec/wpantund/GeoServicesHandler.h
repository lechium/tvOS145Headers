//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GeoServicesHandler : NSObject
{
    int _countryCodeChangedToken;	// 8 = 0x8
    int _monitoring;	// 12 = 0xc
    NSString *_lastCountryCode;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100134b28
@property(retain) NSString *lastCountryCode; // @synthesize lastCountryCode=_lastCountryCode;
- (void)stopMonitoring;	// IMP=0x00000001001349b0
- (void)regulatoryAreaGeoChanged;	// IMP=0x00000001001342c4
- (void)countryConfigurationDidChangeNotification:(id)arg1;	// IMP=0x00000001001342a8
- (_Bool)startMonitoring:(id)arg1;	// IMP=0x0000000100134008

@end
