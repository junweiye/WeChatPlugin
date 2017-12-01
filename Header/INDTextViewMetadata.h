//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTextView;

__attribute__((visibility("hidden")))
@interface INDTextViewMetadata : NSObject
{
    NSTextView *_textView;
    CDUnknownBlockType _transformationBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType transformationBlock; // @synthesize transformationBlock=_transformationBlock;
@property(readonly, nonatomic) NSTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (id)initWithTextView:(id)arg1 transformationBlock:(CDUnknownBlockType)arg2;

@end
