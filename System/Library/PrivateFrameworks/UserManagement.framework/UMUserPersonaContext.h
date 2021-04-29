/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UserManagement/UserManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_voucher;
@class NSObject;

@interface UMUserPersonaContext : NSObject <NSCopying> {

	NSObject*<OS_voucher> _voucher;

}
+(id)currentPersonaContext;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)contextAdopt;
-(void)setPropertiesFromUserPersona:(id)arg1 ;
-(id)copyPersonaContext:(id*)arg1 ;
@end
