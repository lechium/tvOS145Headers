/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@interface _PASSqliteTransaction : NSObject
+(void)readTransactionWithHandle:(id)arg1 block:(/*^block*/id)arg2 ;
+(void)writeTransactionWithHandle:(id)arg1 block:(/*^block*/id)arg2 ;
+(PASDBTransactionCompletion_)readTransactionWithHandle:(id)arg1 failableBlock:(/*^block*/id)arg2 ;
+(PASDBTransactionCompletion_)writeTransactionWithHandle:(id)arg1 failableBlock:(/*^block*/id)arg2 ;
-(id)init;
@end

