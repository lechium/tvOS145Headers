/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PodcastsKit/PodcastsKit-Structs.h>
@interface MTShowsPreferencesDataStore : NSObject

@property (assign,nonatomic) long long sortOrder; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
-(id)sortDescriptors;
-(void)setSortOrder:(long long)arg1 ;
-(long long)sortOrder;
-(long long)_sortTypeForString:(id)arg1 ;
-(id)_stringForSortType:(long long)arg1 ;
@end

