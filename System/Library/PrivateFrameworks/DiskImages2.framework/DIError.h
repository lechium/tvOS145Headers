/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface DIError : NSObject
+(id)errorWithEnumValue:(long long)arg1 errorString:(id)arg2 ;
+(id)errorWithEnumValue:(long long)arg1 errorString:(id)arg2 error:(id*)arg3 ;
+(id)errorWithRetCode:(int)arg1 prefix:(id)arg2 error:(id*)arg3 ;
+(BOOL)failWithEnumValue:(long long)arg1 errorString:(id)arg2 error:(id*)arg3 ;
+(BOOL)failWithRetCode:(int)arg1 prefix:(id)arg2 error:(id*)arg3 ;
@end
