/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/ENTException.h>

@interface ENTApplicationException : ENTException {

	int _type;

}
+(id)read:(id)arg1 ;
+(id)exceptionWithType:(int)arg1 reason:(id)arg2 ;
-(void)write:(id)arg1 ;
-(id)initWithType:(int)arg1 reason:(id)arg2 ;
@end
