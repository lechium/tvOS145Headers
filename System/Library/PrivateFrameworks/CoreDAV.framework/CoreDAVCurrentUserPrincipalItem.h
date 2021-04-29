/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem, CoreDAVItemWithNoChildren;

@interface CoreDAVCurrentUserPrincipalItem : CoreDAVItem {

	CoreDAVHrefItem* _href;
	CoreDAVItemWithNoChildren* _unauthenticated;

}

@property (nonatomic,retain) CoreDAVHrefItem * href;                                   //@synthesize href=_href - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * unauthenticated;              //@synthesize unauthenticated=_unauthenticated - In the implementation block
+(id)copyParseRules;
-(id)description;
-(id)init;
-(CoreDAVHrefItem *)href;
-(void)setHref:(CoreDAVHrefItem *)arg1 ;
-(CoreDAVItemWithNoChildren *)unauthenticated;
-(void)setUnauthenticated:(CoreDAVItemWithNoChildren *)arg1 ;
@end

