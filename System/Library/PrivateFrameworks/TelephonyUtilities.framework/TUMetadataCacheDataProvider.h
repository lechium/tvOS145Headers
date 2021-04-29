/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TUMetadataCacheDataProviderDelegate, OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface TUMetadataCacheDataProvider : NSObject {

	id<TUMetadataCacheDataProviderDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _providerCache;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * providerCache;                                //@synthesize providerCache=_providerCache - In the implementation block
@property (assign,nonatomic,__weak) id<TUMetadataCacheDataProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
+(id)classIdentifier;
-(id)description;
-(id)init;
-(BOOL)isEmpty;
-(id<TUMetadataCacheDataProviderDelegate>)delegate;
-(void)setDelegate:(id<TUMetadataCacheDataProviderDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithQueue:(id)arg1 ;
-(void)refresh;
-(void)setObject:(id)arg1 forDestinationID:(id)arg2 ;
-(void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2 ;
-(NSMutableDictionary *)providerCache;
-(id)metadataForDestinationID:(id)arg1 ;
@end

