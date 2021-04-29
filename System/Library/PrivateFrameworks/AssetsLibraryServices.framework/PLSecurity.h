/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@interface PLSecurity : NSObject
+(id)_secTask:(SecTaskRef)arg1 grantedEntitlements:(id)arg2 ;
+(BOOL)secTask:(SecTaskRef)arg1 hasEntitlement:(id)arg2 ;
+(BOOL)auditToken:(SCD_Struct_PL11)arg1 hasEntitlement:(id)arg2 ;
+(id)connection:(id)arg1 valuesForEntitlements:(id)arg2 ;
+(id)connection:(id)arg1 valueForEntitlement:(id)arg2 ;
+(BOOL)connection:(id)arg1 hasEntitlement:(id)arg2 ;
+(id)connection:(id)arg1 grantedEntitlements:(id)arg2 ;
+(BOOL)containsPhotoKitEntitlement:(id)arg1 ;
+(BOOL)isEntitledForPhotoKit;
+(BOOL)isEntitledForPhotoKitOrPrivatePhotosTCCForToken:(SCD_Struct_PL11)arg1 ;
+(BOOL)connectionIsEntitledForPhotoKit:(id)arg1 ;
+(id)trustedCallerDisplayNameFromAuditToken:(SCD_Struct_PL11)arg1 bundleIdentifier:(id)arg2 ;
@end
