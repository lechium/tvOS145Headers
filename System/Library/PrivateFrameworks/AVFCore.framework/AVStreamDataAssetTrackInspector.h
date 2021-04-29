/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetTrackInspector.h>

@class AVWeakReference;

@interface AVStreamDataAssetTrackInspector : AVAssetTrackInspector {

	AVWeakReference* _weakReferenceToAsset;
	int _trackID;

}
-(void)dealloc;
-(BOOL)isEnabled;
-(SCD_Struct_AV7)timeRange;
-(int)trackID;
-(id)mediaType;
-(CGSize)dimensions;
-(id)formatDescriptions;
-(CGSize)naturalSize;
-(id)mediaCharacteristics;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(unsigned)figMediaType;
@end
