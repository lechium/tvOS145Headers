/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SideBoardCore.framework/SideBoardCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SIBCMessage.h>

@class NSString;

@interface SIBCResumeSessionResponseMessage : NSObject <SIBCMessage> {

	long long _status;

}

@property (nonatomic,readonly) long long status;                    //@synthesize status=_status - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logHandle;
+(id)messageId;
-(NSString *)description;
-(long long)status;
-(id)initWithEncodedDictionary:(id)arg1 ;
-(id)dictionaryEncoding;
@end
