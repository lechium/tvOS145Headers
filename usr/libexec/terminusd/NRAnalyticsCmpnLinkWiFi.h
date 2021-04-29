//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NRAnalyticsCmpnLink.h"

@interface NRAnalyticsCmpnLinkWiFi : NRAnalyticsCmpnLink
{
    unsigned long long _symptomsNOIRegistrationCounter;	// 96 = 0x60
    unsigned long long _symptomsNOIRegistrationStart;	// 104 = 0x68
    unsigned long long _symptomsNOIRegistrationEnd;	// 112 = 0x70
    unsigned long long _symptomsAdvisoryFalsePositivesCounter;	// 120 = 0x78
    unsigned long long _virtualInterfaceRetryCounter;	// 128 = 0x80
}

@property(nonatomic) unsigned long long virtualInterfaceRetryCounter; // @synthesize virtualInterfaceRetryCounter=_virtualInterfaceRetryCounter;
@property(nonatomic) unsigned long long symptomsAdvisoryFalsePositivesCounter; // @synthesize symptomsAdvisoryFalsePositivesCounter=_symptomsAdvisoryFalsePositivesCounter;
@property(nonatomic) unsigned long long symptomsNOIRegistrationEnd; // @synthesize symptomsNOIRegistrationEnd=_symptomsNOIRegistrationEnd;
@property(nonatomic) unsigned long long symptomsNOIRegistrationStart; // @synthesize symptomsNOIRegistrationStart=_symptomsNOIRegistrationStart;
@property(nonatomic) unsigned long long symptomsNOIRegistrationCounter; // @synthesize symptomsNOIRegistrationCounter=_symptomsNOIRegistrationCounter;
- (void)submit;	// IMP=0x000000010009c8e4

@end

