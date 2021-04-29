/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSet;

@interface EKDirectorySearchResultSet : NSObject {

	NSSet* _locations;
	NSSet* _groups;
	NSSet* _resources;
	NSSet* _people;

}

@property (nonatomic,retain) NSSet * locations;              //@synthesize locations=_locations - In the implementation block
@property (nonatomic,retain) NSSet * groups;                 //@synthesize groups=_groups - In the implementation block
@property (nonatomic,retain) NSSet * resources;              //@synthesize resources=_resources - In the implementation block
@property (nonatomic,retain) NSSet * people;                 //@synthesize people=_people - In the implementation block
-(NSSet *)groups;
-(void)setGroups:(NSSet *)arg1 ;
-(NSSet *)locations;
-(void)setLocations:(NSSet *)arg1 ;
-(NSSet *)resources;
-(void)setResources:(NSSet *)arg1 ;
-(NSSet *)people;
-(void)setPeople:(NSSet *)arg1 ;
@end
