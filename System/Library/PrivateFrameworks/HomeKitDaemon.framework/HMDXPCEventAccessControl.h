/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitEventRouter/HMEEventAccessControl.h>

@interface HMDXPCEventAccessControl : HMEEventAccessControl {

	BOOL _requireSPIEntitlement;

}

@property (readonly) BOOL requireSPIEntitlement;              //@synthesize requireSPIEntitlement=_requireSPIEntitlement - In the implementation block
+(id)type;
+(id)requireSPIEntitlementAccessControlPolicy;
-(BOOL)requireSPIEntitlement;
-(id)initWithRequireSPIEntitlement:(BOOL)arg1 ;
@end
