/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class CKVIndexManager, CKVSettings, NSObject;

@interface CKVServiceFactory : NSObject {

	CKVIndexManager* _indexManager;
	CKVSettings* _settings;
	NSObject*<OS_dispatch_queue> _serviceQueue;

}

@property (nonatomic,readonly) CKVIndexManager * indexManager;                         //@synthesize indexManager=_indexManager - In the implementation block
@property (nonatomic,readonly) CKVSettings * settings;                                 //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serviceQueue;              //@synthesize serviceQueue=_serviceQueue - In the implementation block
-(id)init;
-(CKVSettings *)settings;
-(NSObject*<OS_dispatch_queue>)serviceQueue;
-(CKVIndexManager *)indexManager;
-(id)initWithQueue:(id)arg1 indexManager:(id)arg2 settings:(id)arg3 ;
@end

