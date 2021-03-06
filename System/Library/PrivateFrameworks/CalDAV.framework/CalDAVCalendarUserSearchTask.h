/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSSet;

@interface CalDAVCalendarUserSearchTask : CoreDAVPropertyFindBaseTask {

	BOOL _findAttendees;
	BOOL _findLocations;
	BOOL _findUsers;
	BOOL _findGroups;
	BOOL _findResources;
	unsigned long long _resultLimit;
	NSSet* _searchStrings;

}

@property (nonatomic,retain) NSSet * searchStrings;                       //@synthesize searchStrings=_searchStrings - In the implementation block
@property (assign,nonatomic) BOOL findAttendees;                          //@synthesize findAttendees=_findAttendees - In the implementation block
@property (assign,nonatomic) BOOL findLocations;                          //@synthesize findLocations=_findLocations - In the implementation block
@property (assign) BOOL findUsers;                                        //@synthesize findUsers=_findUsers - In the implementation block
@property (assign) BOOL findGroups;                                       //@synthesize findGroups=_findGroups - In the implementation block
@property (assign) BOOL findResources;                                    //@synthesize findResources=_findResources - In the implementation block
@property (assign,nonatomic) unsigned long long resultLimit;              //@synthesize resultLimit=_resultLimit - In the implementation block
+(BOOL)tokensAreLegal:(id)arg1 ;
-(id)searchItems;
-(id)extraAttributes;
-(unsigned long long)resultLimit;
-(void)setResultLimit:(unsigned long long)arg1 ;
-(id)requestBody;
-(id)httpMethod;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(BOOL)findGroups;
-(BOOL)findLocations;
-(BOOL)findResources;
-(BOOL)findUsers;
-(void)setFindGroups:(BOOL)arg1 ;
-(void)setFindLocations:(BOOL)arg1 ;
-(void)setFindResources:(BOOL)arg1 ;
-(void)setFindUsers:(BOOL)arg1 ;
-(void)setSearchStrings:(NSSet *)arg1 ;
-(NSSet *)searchStrings;
-(void)setFindAttendees:(BOOL)arg1 ;
-(BOOL)findAttendees;
-(id)initWithSearchStrings:(id)arg1 atURL:(id)arg2 ;
@end

