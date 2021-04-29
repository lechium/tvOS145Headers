/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString;

@interface DEVariable : NSObject {

	shared_ptr<siri::dialogengine::Variable>* _This;

}

@property (assign) shared_ptr<siri::dialogengine::Variable>* This;              //@synthesize This=_This - In the implementation block
@property (retain) NSString * name; 
@property (retain) NSString * type; 
-(NSString *)name;
-(id)init;
-(BOOL)isEmpty;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setName:(NSString *)arg1 ;
-(id)toString:(int)arg1 ;
-(void)setThis:(shared_ptr<siri::dialogengine::Variable>*)arg1 ;
-(shared_ptr<siri::dialogengine::Variable>*)This;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::Variable>*)arg1 ;
-(shared_ptr<siri::dialogengine::Variable>*)getSharedPtr;
@end

