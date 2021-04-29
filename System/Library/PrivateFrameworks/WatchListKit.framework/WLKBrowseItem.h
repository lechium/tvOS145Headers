/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WLKBasicContentMetadata, NSArray, WLKComingSoonInfo;

@interface WLKBrowseItem : NSObject {

	BOOL _watchlisted;
	BOOL _watchlistable;
	WLKBasicContentMetadata* _content;
	WLKBrowseItem* _currentEpisode;
	NSArray* _playables;
	WLKComingSoonInfo* _contentComingSoonInfo;

}

@property (nonatomic,retain) WLKComingSoonInfo * contentComingSoonInfo;                //@synthesize contentComingSoonInfo=_contentComingSoonInfo - In the implementation block
@property (nonatomic,readonly) WLKBasicContentMetadata * content;                      //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) WLKBrowseItem * currentEpisode;                         //@synthesize currentEpisode=_currentEpisode - In the implementation block
@property (nonatomic,readonly) NSArray * playables;                                    //@synthesize playables=_playables - In the implementation block
@property (getter=isWatchlisted,nonatomic,readonly) BOOL watchlisted;                  //@synthesize watchlisted=_watchlisted - In the implementation block
@property (getter=isWatchlistable,nonatomic,readonly) BOOL watchlistable;              //@synthesize watchlistable=_watchlistable - In the implementation block
+(id)browseItemsWithDictionaries:(id)arg1 context:(id)arg2 ;
-(WLKBasicContentMetadata *)content;
-(id)initWithDictionary:(id)arg1 context:(id)arg2 ;
-(BOOL)isWatchlistable;
-(NSArray *)playables;
-(BOOL)isWatchlisted;
-(WLKBrowseItem *)currentEpisode;
-(id)preferredComingSoonInfo;
-(WLKComingSoonInfo *)contentComingSoonInfo;
-(void)setContentComingSoonInfo:(WLKComingSoonInfo *)arg1 ;
@end

