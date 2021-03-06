/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSString, NSURL, NSArray;

@interface LPEvent : NSObject {

	NSMutableArray* _children;
	long long _type;
	NSString* _subtitle;
	double _startTime;
	double _endTime;
	long long _status;
	NSURL* _URL;
	LPEvent* _parent;

}

@property (nonatomic,readonly) long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) double startTime;                      //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double endTime;                        //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) long long status;                      //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSURL * URL;                             //@synthesize URL=_URL - In the implementation block
@property (nonatomic,__weak,readonly) LPEvent * parent;               //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) NSArray * children;                    //@synthesize children=_children - In the implementation block
-(id)init;
-(long long)type;
-(NSURL *)URL;
-(double)startTime;
-(void)setURL:(NSURL *)arg1 ;
-(NSArray *)children;
-(long long)status;
-(double)duration;
-(LPEvent *)parent;
-(BOOL)isComplete;
-(NSString *)subtitle;
-(double)endTime;
-(id)initWithType:(long long)arg1 subtitle:(id)arg2 ;
-(void)didCompleteWithStatus:(long long)arg1 ;
-(BOOL)_childrenAreComplete;
-(id)childWithType:(long long)arg1 subtitle:(id)arg2 ;
-(void)didCompleteWithErrorCode:(long long)arg1 ;
@end

