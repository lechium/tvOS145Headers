/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDNetworkRouterFirewallRuleConfiguration.h>

@interface HMDNetworkRouterHomeKitOnlyFirewallConfiguration : HMDNetworkRouterFirewallRuleConfiguration {

	BOOL _isFiltered;
	BOOL _useFallbackForRTP;
	BOOL _useFallbackForHDS;

}
+(id)fallbackIdentifier;
+(id)fallbackConfigurationForRuleset:(id)arg1 ;
-(id)description;
-(id)initWithAccessory:(id)arg1 sourceConfiguration:(id)arg2 ;
@end
