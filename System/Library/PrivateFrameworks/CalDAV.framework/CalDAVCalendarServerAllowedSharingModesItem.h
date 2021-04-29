/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAllowedSharingModesItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _canBePublished;
	CoreDAVItemWithNoChildren* _canBeShared;
	CoreDAVItemWithNoChildren* _isMarkedUndeletable;
	CoreDAVItemWithNoChildren* _isMarkedImmutableSharees;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * canBePublished;                        //@synthesize canBePublished=_canBePublished - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * canBeShared;                           //@synthesize canBeShared=_canBeShared - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * isMarkedUndeletable;                   //@synthesize isMarkedUndeletable=_isMarkedUndeletable - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * isMarkedImmutableSharees;              //@synthesize isMarkedImmutableSharees=_isMarkedImmutableSharees - In the implementation block
-(id)init;
-(id)copyParseRules;
-(CoreDAVItemWithNoChildren *)isMarkedUndeletable;
-(void)setCanBeShared:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setCanBePublished:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)canBePublished;
-(CoreDAVItemWithNoChildren *)canBeShared;
-(CoreDAVItemWithNoChildren *)isMarkedImmutableSharees;
-(void)setIsMarkedImmutableSharees:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setIsMarkedUndeletable:(CoreDAVItemWithNoChildren *)arg1 ;
@end

