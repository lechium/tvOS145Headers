/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MPArtworkRepresentation;

@interface MPArtworkRepresentationCollection : NSObject {

	MPArtworkRepresentation* _imageRepresentation;
	MPArtworkRepresentation* _videoRepresentation;
	unsigned long long _bestRepresentationKinds;

}

@property (nonatomic,retain) MPArtworkRepresentation * imageRepresentation;              //@synthesize imageRepresentation=_imageRepresentation - In the implementation block
@property (nonatomic,retain) MPArtworkRepresentation * videoRepresentation;              //@synthesize videoRepresentation=_videoRepresentation - In the implementation block
@property (assign,nonatomic) unsigned long long bestRepresentationKinds;                 //@synthesize bestRepresentationKinds=_bestRepresentationKinds - In the implementation block
+(id)collectionWithImageRepresentation:(id)arg1 videoRepresentation:(id)arg2 ;
+(id)collectionWithImageRepresentation:(id)arg1 videoRepresentation:(id)arg2 bestRepresentationKinds:(unsigned long long)arg3 ;
-(MPArtworkRepresentation *)imageRepresentation;
-(BOOL)isBestRepresentationForKind:(long long)arg1 ;
-(void)resetForRepresentationKinds:(unsigned long long)arg1 ;
-(void)setImageRepresentation:(MPArtworkRepresentation *)arg1 ;
-(MPArtworkRepresentation *)videoRepresentation;
-(void)setVideoRepresentation:(MPArtworkRepresentation *)arg1 ;
-(unsigned long long)bestRepresentationKinds;
-(void)setBestRepresentationKinds:(unsigned long long)arg1 ;
@end

