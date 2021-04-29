/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSIndexPath, SAMPCollection;

@interface POPodcastModelObject : NSObject {

	NSString* _uuid;
	NSString* _title;
	NSString* _feedUrl;
	NSIndexPath* _indexPath;

}

@property (retain) NSString * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (retain) NSString * feedUrl;                             //@synthesize feedUrl=_feedUrl - In the implementation block
@property (retain) NSIndexPath * indexPath;                        //@synthesize indexPath=_indexPath - In the implementation block
@property (readonly) SAMPCollection * SAMPCollection; 
+(id)uriScheme;
+(Class)SAMPClass;
-(id)description;
-(NSIndexPath *)indexPath;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(void)setFeedUrl:(NSString *)arg1 ;
-(NSString *)feedUrl;
-(SAMPCollection *)SAMPCollection;
@end

