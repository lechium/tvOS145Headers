/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, SHSignature, NSString;

@interface SHLocalStoreMatch : NSObject {

	NSArray* _mediaItems;
	SHSignature* _signature;

}

@property (nonatomic,readonly) NSArray * mediaItems;                      //@synthesize mediaItems=_mediaItems - In the implementation block
@property (nonatomic,readonly) SHSignature * signature;                   //@synthesize signature=_signature - In the implementation block
@property (nonatomic,readonly) NSString * suggestedFilename; 
-(NSString *)suggestedFilename;
-(SHSignature *)signature;
-(NSArray *)mediaItems;
-(id)initWithSignature:(id)arg1 representingMediaItems:(id)arg2 ;
-(id)mediaItemDictionariesRepresentation;
@end

