/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NEIKEv2ConfigPayload.h>

@class NEIKEv2ConfigurationMessage;

@interface NEIKEv2ResponseConfigPayload : NEIKEv2ConfigPayload {

	NEIKEv2ConfigurationMessage* _configurationRequest;

}

@property (retain) NEIKEv2ConfigurationMessage * configurationRequest;              //@synthesize configurationRequest=_configurationRequest - In the implementation block
-(NEIKEv2ConfigurationMessage *)configurationRequest;
-(void)setConfigurationRequest:(NEIKEv2ConfigurationMessage *)arg1 ;
-(BOOL)parsePayloadData;
-(id)initWithResponseConfigPayload:(id)arg1 configRequest:(id)arg2 ;
@end
