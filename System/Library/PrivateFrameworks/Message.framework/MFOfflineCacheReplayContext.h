/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableDictionary;

@interface MFOfflineCacheReplayContext : NSObject {

	NSString* _selectedMailboxID;
	NSMutableDictionary* _translatedIDsByTemporaryID;
	NSMutableDictionary* _failureSnapshotsByTemporaryID;

}

@property (nonatomic,copy) NSString * selectedMailboxID;                                         //@synthesize selectedMailboxID=_selectedMailboxID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * translatedIDsByTemporaryID;                 //@synthesize translatedIDsByTemporaryID=_translatedIDsByTemporaryID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * failureSnapshotsByTemporaryID;              //@synthesize failureSnapshotsByTemporaryID=_failureSnapshotsByTemporaryID - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)selectedMailboxID;
-(void)setSelectedMailboxID:(NSString *)arg1 ;
-(NSMutableDictionary *)translatedIDsByTemporaryID;
-(NSMutableDictionary *)failureSnapshotsByTemporaryID;
@end

