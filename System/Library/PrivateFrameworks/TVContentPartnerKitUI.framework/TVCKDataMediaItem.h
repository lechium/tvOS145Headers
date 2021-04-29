/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVPlayback/TVPBaseMediaItem.h>

@class TVCKDataItem;

@interface TVCKDataMediaItem : TVPBaseMediaItem {

	TVCKDataItem* _dataItem;

}

@property (nonatomic,retain) TVCKDataItem * dataItem;              //@synthesize dataItem=_dataItem - In the implementation block
-(id)description;
-(void)setDataItem:(TVCKDataItem *)arg1 ;
-(TVCKDataItem *)dataItem;
-(void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2 ;
-(BOOL)isEqualToMediaItem:(id)arg1 ;
-(void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(BOOL)arg4 ;
-(void)updatePlayCountForElapsedTime:(double)arg1 duration:(double)arg2 ;
-(id)mediaItemURL;
-(BOOL)hasTrait:(id)arg1 ;
-(id)mediaItemMetadataForProperty:(id)arg1 ;
-(id)initWithDataItem:(id)arg1 ;
-(id)_dataItemValueForProperty:(id)arg1 ;
-(BOOL)_supportsBookmarks;
-(BOOL)_supportsPlayCounts;
-(id)_propertyNameMappings;
-(id)_mediaTypeStringFromDataType:(id)arg1 ;
-(BOOL)_hasVideoContent;
@end

