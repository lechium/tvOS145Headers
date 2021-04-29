/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPStoreModelRequest.h>

@class NSURL, NSString, MPModelStoreBrowseResponse;

@interface MPModelStoreBrowseRoomRequest : MPStoreModelRequest {

	NSURL* _loadAdditionalContentURL;
	NSString* _roomID;
	MPModelStoreBrowseResponse* _previousRetrievedNestedResponse;
	MPModelStoreBrowseResponse* _previousResponse;

}

@property (nonatomic,copy) NSURL * loadAdditionalContentURL;                                            //@synthesize loadAdditionalContentURL=_loadAdditionalContentURL - In the implementation block
@property (nonatomic,copy) NSString * roomID;                                                           //@synthesize roomID=_roomID - In the implementation block
@property (nonatomic,retain) MPModelStoreBrowseResponse * previousRetrievedNestedResponse;              //@synthesize previousRetrievedNestedResponse=_previousRetrievedNestedResponse - In the implementation block
@property (nonatomic,retain) MPModelStoreBrowseResponse * previousResponse;                             //@synthesize previousResponse=_previousResponse - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)allSupportedItemProperties;
+(id)allSupportedSectionProperties;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(void)configureWithParentSection:(id)arg1 ;
-(NSURL *)loadAdditionalContentURL;
-(void)setLoadAdditionalContentURL:(NSURL *)arg1 ;
-(MPModelStoreBrowseResponse *)previousRetrievedNestedResponse;
-(void)setPreviousRetrievedNestedResponse:(MPModelStoreBrowseResponse *)arg1 ;
-(MPModelStoreBrowseResponse *)previousResponse;
-(void)setPreviousResponse:(MPModelStoreBrowseResponse *)arg1 ;
-(NSString *)roomID;
-(void)setRoomID:(NSString *)arg1 ;
@end

