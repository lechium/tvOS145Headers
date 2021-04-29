/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SideBoardCore.framework/SideBoardCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SIBCApplicationMessage.h>

@class NSString;

@interface SIBCDismissNotificationMessage : NSObject <SIBCApplicationMessage> {

	NSString* _applicationId;
	NSString* _foregroundApp;

}

@property (nonatomic,readonly) NSString * foregroundApp;              //@synthesize foregroundApp=_foregroundApp - In the implementation block
@property (nonatomic,readonly) NSString * applicationId;              //@synthesize applicationId=_applicationId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageId;
-(NSString *)description;
-(NSString *)applicationId;
-(id)initWithEncodedDictionary:(id)arg1 ;
-(id)dictionaryEncoding;
-(NSString *)foregroundApp;
@end

