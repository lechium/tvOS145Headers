/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <libobjc.A.dylib/CoreDAVPropFindTaskDelegate.h>

@class ICSDocument, NSURL, CoreDAVPropFindTask, NSString;

@interface CalDAVGetOfficeHoursTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate> {

	ICSDocument* _calendarAvailability;
	NSURL* _inboxURL;
	CoreDAVPropFindTask* _fetchTask;

}

@property (nonatomic,retain) NSURL * inboxURL;                                   //@synthesize inboxURL=_inboxURL - In the implementation block
@property (nonatomic,retain) CoreDAVPropFindTask * fetchTask;                    //@synthesize fetchTask=_fetchTask - In the implementation block
@property (nonatomic,retain) ICSDocument * calendarAvailability;                 //@synthesize calendarAvailability=_calendarAvailability - In the implementation block
@property (assign,nonatomic) id<CoreDAVTaskGroupDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_finishWithError:(id)arg1 ;
-(void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(void)startTaskGroup;
-(void)setFetchTask:(CoreDAVPropFindTask *)arg1 ;
-(CoreDAVPropFindTask *)fetchTask;
-(NSURL *)inboxURL;
-(void)setInboxURL:(NSURL *)arg1 ;
-(void)setCalendarAvailability:(ICSDocument *)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 inboxURL:(id)arg2 taskManager:(id)arg3 ;
-(ICSDocument *)calendarAvailability;
@end

