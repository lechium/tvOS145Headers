/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMMessagePartChatItem.h>
#import <IMCore/IMPluginChatItemProtocol.h>

@class NSString, IMBalloonPluginDataSource, IMPluginPayload;

@interface IMTranscriptPluginChatItem : IMMessagePartChatItem <IMPluginChatItemProtocol> {

	BOOL _isLastChatItemOfPluginType;
	BOOL _hasSetIsLastChatItemOfPluginType;
	BOOL _parentChatHasKnownParticipants;
	IMPluginPayload* _initialPayload;
	NSString* _bundleIdentifier;
	IMBalloonPluginDataSource* _dataSource;

}

@property (nonatomic,retain) IMBalloonPluginDataSource * dataSource;                                           //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) IMPluginPayload * initialPayload;                                                 //@synthesize initialPayload=_initialPayload - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                                                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasSetIsLastChatItemOfPluginType;                                            //@synthesize hasSetIsLastChatItemOfPluginType=_hasSetIsLastChatItemOfPluginType - In the implementation block
@property (nonatomic,readonly) BOOL isDataSourceInitialized; 
@property (nonatomic,readonly) NSString * pluginSessionGUID; 
@property (nonatomic,readonly) unsigned long long playbackType; 
@property (assign,setter=setLastChatItemOfPluginType:,nonatomic) BOOL isLastChatItemOfPluginType;              //@synthesize isLastChatItemOfPluginType=_isLastChatItemOfPluginType - In the implementation block
@property (nonatomic,readonly) BOOL parentChatHasKnownParticipants;                                            //@synthesize parentChatHasKnownParticipants=_parentChatHasKnownParticipants - In the implementation block
@property (nonatomic,readonly) BOOL isPlayed; 
@property (nonatomic,readonly) BOOL isSaved; 
@property (nonatomic,retain,readonly) NSString * type; 
@property (nonatomic,readonly) BOOL isFromMe; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(NSString *)type;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(IMBalloonPluginDataSource *)dataSource;
-(void)setDataSource:(IMBalloonPluginDataSource *)arg1 ;
-(unsigned long long)playbackType;
-(BOOL)isSaved;
-(BOOL)isPlayed;
-(NSString *)pluginSessionGUID;
-(id)_initWithItem:(id)arg1 initialPayload:(id)arg2 index:(long long)arg3 messagePartRange:(NSRange)arg4 parentChatHasKnownParticipants:(BOOL)arg5 ;
-(id)replyContextPreviewChatItemForReply:(id)arg1 ;
-(IMPluginPayload *)initialPayload;
-(BOOL)parentChatHasKnownParticipants;
-(void)setInitialPayload:(IMPluginPayload *)arg1 ;
-(BOOL)hasSetIsLastChatItemOfPluginType;
-(BOOL)isLastChatItemOfPluginType;
-(BOOL)isDataSourceInitialized;
-(void)setLastChatItemOfPluginType:(BOOL)arg1 ;
-(BOOL)wantsAutoPlayback;
-(void)setHasSetIsLastChatItemOfPluginType:(BOOL)arg1 ;
@end

