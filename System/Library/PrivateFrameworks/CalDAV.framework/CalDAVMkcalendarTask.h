/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVTask.h>

@class NSSet;

@interface CalDAVMkcalendarTask : CoreDAVTask {

	NSSet* _setElements;

}

@property (nonatomic,retain) NSSet * setElements;                                                         //@synthesize setElements=_setElements - In the implementation block
@property (assign,nonatomic) id<CalDAVMkcalendarTaskDelegate><CoreDAVTaskDelegate> delegate; 
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(id)requestBody;
-(id)httpMethod;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)initWithPropertiesToSet:(id)arg1 atURL:(id)arg2 ;
-(void)setSupportForEvents:(BOOL)arg1 tasks:(BOOL)arg2 ;
-(void)setSetElements:(NSSet *)arg1 ;
-(NSSet *)setElements;
@end

