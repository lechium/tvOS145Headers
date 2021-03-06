/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, ASCOfferMetadata;

@interface ASCAppOfferSavedState : NSObject {

	NSString* _state;
	ASCOfferMetadata* _metadata;
	long long _flags;

}

@property (nonatomic,copy,readonly) NSString * state;                         //@synthesize state=_state - In the implementation block
@property (nonatomic,copy,readonly) ASCOfferMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) long long flags;                               //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) BOOL isLoadingFullState; 
@property (nonatomic,readonly) BOOL isActionable; 
-(long long)flags;
-(NSString *)state;
-(ASCOfferMetadata *)metadata;
-(BOOL)isActionable;
-(id)initWithState:(id)arg1 metadata:(id)arg2 flags:(long long)arg3 ;
-(BOOL)isLoadingFullState;
@end

