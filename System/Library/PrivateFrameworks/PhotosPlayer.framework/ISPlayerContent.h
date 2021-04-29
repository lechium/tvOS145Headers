/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class AVPlayerItem, NSNumber;

@interface ISPlayerContent : NSObject {

	BOOL _photoHasColorAdjustments;
	BOOL _photoIsOriginal;
	BOOL _supportsVitality;
	int _photoEXIFOrientation;
	CGImageRef _photo;
	AVPlayerItem* _videoPlayerItem;
	NSNumber* _variationIdentifier;
	SCD_Struct_IS1 _photoTime;
	SCD_Struct_IS1 _videoDuration;

}

@property (nonatomic,readonly) CGImageRef photo;                            //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) int photoEXIFOrientation;                    //@synthesize photoEXIFOrientation=_photoEXIFOrientation - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IS1 photoTime;                    //@synthesize photoTime=_photoTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IS1 videoDuration;                //@synthesize videoDuration=_videoDuration - In the implementation block
@property (nonatomic,readonly) AVPlayerItem * videoPlayerItem;              //@synthesize videoPlayerItem=_videoPlayerItem - In the implementation block
@property (nonatomic,readonly) BOOL photoHasColorAdjustments;               //@synthesize photoHasColorAdjustments=_photoHasColorAdjustments - In the implementation block
@property (nonatomic,readonly) BOOL photoIsOriginal;                        //@synthesize photoIsOriginal=_photoIsOriginal - In the implementation block
@property (nonatomic,readonly) BOOL supportsVitality;                       //@synthesize supportsVitality=_supportsVitality - In the implementation block
@property (nonatomic,readonly) NSNumber * variationIdentifier;              //@synthesize variationIdentifier=_variationIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(CGImageRef)photo;
-(SCD_Struct_IS1)photoTime;
-(SCD_Struct_IS1)videoDuration;
-(AVPlayerItem *)videoPlayerItem;
-(int)photoEXIFOrientation;
-(BOOL)photoIsOriginal;
-(BOOL)supportsVitality;
-(NSNumber *)variationIdentifier;
-(BOOL)photoHasColorAdjustments;
-(id)initWithPhoto:(CGImageRef)arg1 photoIsOriginal:(BOOL)arg2 photoEXIFOrientation:(int)arg3 photoTime:(SCD_Struct_IS1)arg4 videoDuration:(SCD_Struct_IS1)arg5 photoHasColorAdjustments:(BOOL)arg6 videoPlayerItem:(id)arg7 variationIdentifier:(id)arg8 supportsVitality:(BOOL)arg9 ;
@end

