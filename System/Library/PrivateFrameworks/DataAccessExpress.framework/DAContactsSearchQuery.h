/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DataAccessExpress/DASearchQuery.h>

@class NSString;

@interface DAContactsSearchQuery : DASearchQuery {

	BOOL _includePhotos;
	BOOL _calendarInitiated;
	NSString* _searchBase;
	NSString* _searchScope;

}

@property (nonatomic,copy) NSString * searchBase;                 //@synthesize searchBase=_searchBase - In the implementation block
@property (nonatomic,copy) NSString * searchScope;                //@synthesize searchScope=_searchScope - In the implementation block
@property (assign,nonatomic) BOOL includePhotos;                  //@synthesize includePhotos=_includePhotos - In the implementation block
@property (assign,nonatomic) BOOL calendarInitiated;              //@synthesize calendarInitiated=_calendarInitiated - In the implementation block
+(id)contactsSearchQueryWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3 consumer:(id)arg4 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2 ;
-(id)initWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3 consumer:(id)arg4 ;
-(void)setSearchBase:(NSString *)arg1 ;
-(void)setSearchScope:(NSString *)arg1 ;
-(void)setIncludePhotos:(BOOL)arg1 ;
-(NSString *)searchBase;
-(NSString *)searchScope;
-(BOOL)includePhotos;
-(BOOL)calendarInitiated;
-(void)setCalendarInitiated:(BOOL)arg1 ;
@end

