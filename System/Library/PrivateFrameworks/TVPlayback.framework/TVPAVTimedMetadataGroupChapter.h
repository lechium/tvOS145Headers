/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVPlayback/TVPMutableChapter.h>

@class AVMetadataItem, TVPAVMetadataItemImageLoader;

@interface TVPAVTimedMetadataGroupChapter : TVPMutableChapter {

	AVMetadataItem* _imageMetadataItem;
	TVPAVMetadataItemImageLoader* _imageLoader;

}

@property (nonatomic,retain) AVMetadataItem * imageMetadataItem;                      //@synthesize imageMetadataItem=_imageMetadataItem - In the implementation block
@property (nonatomic,retain) TVPAVMetadataItemImageLoader * imageLoader;              //@synthesize imageLoader=_imageLoader - In the implementation block
-(TVPAVMetadataItemImageLoader *)imageLoader;
-(id)imageProxy;
-(void)setImageLoader:(TVPAVMetadataItemImageLoader *)arg1 ;
-(void)setImageMetadataItem:(AVMetadataItem *)arg1 ;
-(void)_loadChapterNameFromMetadataItem:(id)arg1 ;
-(AVMetadataItem *)imageMetadataItem;
-(id)initWithAVTimedMetadataGroup:(id)arg1 filterByLanguages:(id)arg2 ;
@end
