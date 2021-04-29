/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/EKPredicate.h>
#import <libobjc.A.dylib/EKDefaultPropertiesLoading.h>

@class NSString, NSDate, NSArray;

@interface EKReminderPredicate : EKPredicate <EKDefaultPropertiesLoading> {

	BOOL _limitToCompletedOrIncomplete;
	BOOL _completed;
	BOOL _useCompletionDateAsAlternate;
	BOOL _useDueDateAsCompletionDate;
	BOOL _shouldLoadDefaultProperties;
	int _sortOrder;
	NSString* _listTitle;
	NSDate* _dueAfter;
	NSDate* _dueBefore;
	NSString* _searchTerm;
	unsigned long long _maxResults;
	NSArray* _defaultPropertiesToLoad;

}

@property (nonatomic,retain) NSString * listTitle;                           //@synthesize listTitle=_listTitle - In the implementation block
@property (assign,nonatomic) BOOL limitToCompletedOrIncomplete;              //@synthesize limitToCompletedOrIncomplete=_limitToCompletedOrIncomplete - In the implementation block
@property (assign,nonatomic) BOOL completed;                                 //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) NSDate * dueAfter;                              //@synthesize dueAfter=_dueAfter - In the implementation block
@property (nonatomic,retain) NSDate * dueBefore;                             //@synthesize dueBefore=_dueBefore - In the implementation block
@property (assign,nonatomic) BOOL useCompletionDateAsAlternate;              //@synthesize useCompletionDateAsAlternate=_useCompletionDateAsAlternate - In the implementation block
@property (assign,nonatomic) BOOL useDueDateAsCompletionDate;                //@synthesize useDueDateAsCompletionDate=_useDueDateAsCompletionDate - In the implementation block
@property (nonatomic,retain) NSString * searchTerm;                          //@synthesize searchTerm=_searchTerm - In the implementation block
@property (assign,nonatomic) int sortOrder;                                  //@synthesize sortOrder=_sortOrder - In the implementation block
@property (assign,nonatomic) unsigned long long maxResults;                  //@synthesize maxResults=_maxResults - In the implementation block
@property (assign,nonatomic) BOOL shouldLoadDefaultProperties;               //@synthesize shouldLoadDefaultProperties=_shouldLoadDefaultProperties - In the implementation block
@property (nonatomic,retain) NSArray * defaultPropertiesToLoad;              //@synthesize defaultPropertiesToLoad=_defaultPropertiesToLoad - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)predicateWithCalendars:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)completed;
-(void)setMaxResults:(unsigned long long)arg1 ;
-(unsigned long long)maxResults;
-(void)setCompleted:(BOOL)arg1 ;
-(void)setSortOrder:(int)arg1 ;
-(int)sortOrder;
-(NSString *)searchTerm;
-(void)setSearchTerm:(NSString *)arg1 ;
-(NSDate *)dueAfter;
-(void)setDueAfter:(NSDate *)arg1 ;
-(NSDate *)dueBefore;
-(void)setDueBefore:(NSDate *)arg1 ;
-(id)initWithCalendars:(id)arg1 ;
-(BOOL)shouldLoadDefaultProperties;
-(NSArray *)defaultPropertiesToLoad;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
-(BOOL)limitToCompletedOrIncomplete;
-(BOOL)useCompletionDateAsAlternate;
-(BOOL)useDueDateAsCompletionDate;
-(NSString *)listTitle;
-(void)setListTitle:(NSString *)arg1 ;
-(void)setLimitToCompletedOrIncomplete:(BOOL)arg1 ;
-(void)setUseCompletionDateAsAlternate:(BOOL)arg1 ;
-(void)setUseDueDateAsCompletionDate:(BOOL)arg1 ;
-(void)setDefaultPropertiesToLoad:(NSArray *)arg1 ;
-(void)setShouldLoadDefaultProperties:(BOOL)arg1 ;
@end

