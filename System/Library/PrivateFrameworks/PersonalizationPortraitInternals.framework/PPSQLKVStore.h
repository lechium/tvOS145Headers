/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PPSQLKVStore : NSObject
+(id)loadBlobForKey:(id)arg1 transaction:(id)arg2 ;
+(void)storeBlob:(id)arg1 forKey:(id)arg2 transaction:(id)arg3 ;
+(void)removeBlobForKey:(id)arg1 transaction:(id)arg2 ;
+(void)setNumber:(id)arg1 forKey:(id)arg2 transaction:(id)arg3 ;
+(void)setString:(id)arg1 forKey:(id)arg2 transaction:(id)arg3 ;
+(id)numberForKey:(id)arg1 transaction:(id)arg2 ;
+(id)stringForKey:(id)arg1 transaction:(id)arg2 ;
@end

