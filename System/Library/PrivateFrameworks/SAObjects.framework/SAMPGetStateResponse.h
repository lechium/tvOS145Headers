/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, SAMPMediaItem, NSNumber;

@interface SAMPGetStateResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * hashedGroupID; 
@property (nonatomic,retain) SAMPMediaItem * listeningToItem; 
@property (nonatomic,copy) NSNumber * listeningToMusicApplication; 
@property (nonatomic,copy) NSString * source; 
@property (assign,nonatomic) int state; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getStateResponse;
+(id)getStateResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)source;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)hashedGroupID;
-(void)setHashedGroupID:(NSString *)arg1 ;
-(SAMPMediaItem *)listeningToItem;
-(void)setListeningToItem:(SAMPMediaItem *)arg1 ;
-(NSNumber *)listeningToMusicApplication;
-(void)setListeningToMusicApplication:(NSNumber *)arg1 ;
@end

