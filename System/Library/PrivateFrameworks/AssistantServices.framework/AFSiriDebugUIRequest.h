/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AFSiriRequest.h>

@class NSString;

@interface AFSiriDebugUIRequest : AFSiriRequest {

	NSString* _message;
	BOOL _frontmost;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)message;
-(id)createResponse;
-(id)initWithMessage:(id)arg1 makeAppFrontmost:(BOOL)arg2 ;
-(BOOL)_makeAppFrontmost;
@end

