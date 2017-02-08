type animation;
type attr;
type comment;
type cssStyleDeclaration;
type cssStyleSheet;
type document;
type documentFragment;
type documentImplementation;
type documentType;
type domRect;
type domSettableTokenList;
type domStringMap;
type domTokenList;
type element;
type event;
type eventTarget;
type history;
type location;
type node;
type nodeFilter = {
  acceptNode: element => int /* one of the enum values defined in NodeFilter */
};
type nodeIterator;
type range;
type selection;
type shadowRoot;
type textNode;
type treeWalker;
type window;

/* special */
type eventPointerId;

module AsNode = {
  external asNode : 't => node = "%identity";
};

module AsEventTarget = {
  external asEventTarget : 't => eventTarget = "%identity";
};