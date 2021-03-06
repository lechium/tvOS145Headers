/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ENSSKeychain : NSObject
+(id)allAccounts;
+(id)accountsForService:(id)arg1 ;
+(id)passwordForService:(id)arg1 account:(id)arg2 ;
+(id)passwordForService:(id)arg1 account:(id)arg2 error:(id*)arg3 ;
+(BOOL)deletePasswordForService:(id)arg1 account:(id)arg2 ;
+(BOOL)deletePasswordForService:(id)arg1 account:(id)arg2 error:(id*)arg3 ;
+(BOOL)setPassword:(id)arg1 forService:(id)arg2 account:(id)arg3 ;
+(BOOL)setPassword:(id)arg1 forService:(id)arg2 account:(id)arg3 error:(id*)arg4 ;
+(void*)accessibilityType;
+(void)setAccessibilityType:(void*)arg1 ;
@end

