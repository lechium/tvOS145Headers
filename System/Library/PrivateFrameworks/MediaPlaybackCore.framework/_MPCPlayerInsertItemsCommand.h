/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlaybackCore/_MPCPlayerCommand.h>
#import <libobjc.A.dylib/MPCPlayerInsertItemsCommand.h>

@class NSArray, NSSet, NSString;

@interface _MPCPlayerInsertItemsCommand : _MPCPlayerCommand <MPCPlayerInsertItemsCommand> {

	BOOL _supportsCreateStation;
	NSArray* _devices;
	NSSet* _supportedInsertionPositions;
	NSSet* _supportedQueueTypes;
	NSSet* _supportedCustomDataQueueIdentifiers;

}

@property (nonatomic,copy) NSArray * devices;                                          //@synthesize devices=_devices - In the implementation block
@property (assign,nonatomic) BOOL supportsCreateStation;                               //@synthesize supportsCreateStation=_supportsCreateStation - In the implementation block
@property (nonatomic,retain) NSSet * supportedInsertionPositions;                      //@synthesize supportedInsertionPositions=_supportedInsertionPositions - In the implementation block
@property (nonatomic,retain) NSSet * supportedQueueTypes;                              //@synthesize supportedQueueTypes=_supportedQueueTypes - In the implementation block
@property (nonatomic,retain) NSSet * supportedCustomDataQueueIdentifiers;              //@synthesize supportedCustomDataQueueIdentifiers=_supportedCustomDataQueueIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)devices;
-(void)setDevices:(NSArray *)arg1 ;
-(NSSet *)supportedInsertionPositions;
-(void)setSupportedInsertionPositions:(NSSet *)arg1 ;
-(void)setSupportedQueueTypes:(NSSet *)arg1 ;
-(void)setSupportedCustomDataQueueIdentifiers:(NSSet *)arg1 ;
-(void)setSupportsCreateStation:(BOOL)arg1 ;
-(NSSet *)supportedQueueTypes;
-(NSSet *)supportedCustomDataQueueIdentifiers;
-(id)_createRadioStationCommandRequest;
-(id)_insertWithOptions:(id)arg1 ;
-(BOOL)_isSupportedPlaybackIntent:(id)arg1 forRemotePlayer:(BOOL)arg2 atInsertionPosition:(int)arg3 ;
-(BOOL)supportsCreateStation;
-(id)insertAfterPlayingItemWithPlaybackIntent:(id)arg1 ;
-(id)insertPlaybackIntent:(id)arg1 afterItem:(id)arg2 ;
-(id)insertAtEndOfTracklistWithPlaybackIntent:(id)arg1 ;
@end

