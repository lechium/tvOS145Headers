/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNChangeNotifierWrapper.h>

@class NSString;

@interface CNChangeNotifierDarwinWrapper : NSObject <CNChangeNotifierWrapper>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)postNotification:(id)arg1 ;
-(void)addObserver:(id)arg1 notification:(id)arg2 ;
-(void)removeObserver:(id)arg1 notification:(id)arg2 ;
@end
