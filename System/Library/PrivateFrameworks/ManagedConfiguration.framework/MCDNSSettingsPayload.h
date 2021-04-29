/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ManagedConfiguration/MCPayload.h>

@class NSDictionary, NSArray, NSNumber;

@interface MCDNSSettingsPayload : MCPayload {

	NSDictionary* _dnsSettings;
	NSArray* _onDemandRules;
	NSNumber* _prohibitDisablement;

}

@property (nonatomic,copy,readonly) NSDictionary * configurationDictionary; 
@property (nonatomic,copy,readonly) NSDictionary * dnsSettings;                          //@synthesize dnsSettings=_dnsSettings - In the implementation block
@property (nonatomic,copy,readonly) NSArray * onDemandRules;                             //@synthesize onDemandRules=_onDemandRules - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * prohibitDisablement;                      //@synthesize prohibitDisablement=_prohibitDisablement - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)verboseDescription;
-(id)installationWarnings;
-(NSDictionary *)dnsSettings;
-(NSArray *)onDemandRules;
-(NSNumber *)prohibitDisablement;
-(NSDictionary *)configurationDictionary;
@end
