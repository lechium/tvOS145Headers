/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSArray;

@interface ANAnalyticsGroup : NSObject {

	NSMutableArray* _announcements;
	NSMutableArray* _metadata;

}

@property (nonatomic,readonly) NSArray * announcements;              //@synthesize announcements=_announcements - In the implementation block
@property (nonatomic,readonly) NSArray * metadata;                   //@synthesize metadata=_metadata - In the implementation block
-(id)init;
-(NSArray *)metadata;
-(NSArray *)announcements;
-(void)addAnnouncement:(id)arg1 metadata:(id)arg2 ;
@end

