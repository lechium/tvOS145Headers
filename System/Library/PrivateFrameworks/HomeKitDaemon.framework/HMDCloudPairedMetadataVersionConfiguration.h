/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDCloudPairedMetadataDiagnostics, HMDNetworkRouterFirewallRuleAccessoryIdentifier, NSDictionary, NSString;

@interface HMDCloudPairedMetadataVersionConfiguration : HMFObject <HMFLogging> {

	HMDCloudPairedMetadataDiagnostics* _diagnostics;
	HMDNetworkRouterFirewallRuleAccessoryIdentifier* _accessoryIdentifier;

}

@property (nonatomic,readonly) HMDNetworkRouterFirewallRuleAccessoryIdentifier * accessoryIdentifier;              //@synthesize accessoryIdentifier=_accessoryIdentifier - In the implementation block
@property (nonatomic,readonly) HMDCloudPairedMetadataDiagnostics * diagnostics;                                    //@synthesize diagnostics=_diagnostics - In the implementation block
@property (nonatomic,readonly) NSDictionary * prettyJSONDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMDNetworkRouterFirewallRuleAccessoryIdentifier *)accessoryIdentifier;
-(HMDCloudPairedMetadataDiagnostics *)diagnostics;
-(id)attributeDescriptions;
-(NSDictionary *)prettyJSONDictionary;
-(id)initWithAccessoryIdentifier:(id)arg1 jsonDictionary:(id)arg2 ;
-(id)initWithAccessoryIdentifier:(id)arg1 diagnostics:(id)arg2 ;
@end

